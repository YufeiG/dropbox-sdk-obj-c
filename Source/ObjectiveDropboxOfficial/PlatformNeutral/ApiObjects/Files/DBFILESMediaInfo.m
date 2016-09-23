///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBFILESMediaInfo.h"
#import "DBFILESMediaMetadata.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBFILESMediaInfo

@synthesize metadata = _metadata;

#pragma mark - Constructors

- (instancetype)initWithPending {
  self = [super init];
  if (self) {
    _tag = DBFILESMediaInfoPending;
  }
  return self;
}

- (instancetype)initWithMetadata:(DBFILESMediaMetadata *)metadata {
  self = [super init];
  if (self) {
    _tag = DBFILESMediaInfoMetadata;
    _metadata = metadata;
  }
  return self;
}

#pragma mark - Instance field accessors

- (DBFILESMediaMetadata *)metadata {
  if (![self isMetadata]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBFILESMediaInfoMetadata, but was %@.", [self tagName]];
  }
  return _metadata;
}

#pragma mark - Tag state methods

- (BOOL)isPending {
  return _tag == DBFILESMediaInfoPending;
}

- (BOOL)isMetadata {
  return _tag == DBFILESMediaInfoMetadata;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBFILESMediaInfoPending:
    return @"DBFILESMediaInfoPending";
  case DBFILESMediaInfoMetadata:
    return @"DBFILESMediaInfoMetadata";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBFILESMediaInfoSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBFILESMediaInfoSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBFILESMediaInfoSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBFILESMediaInfoSerializer

+ (NSDictionary *)serialize:(DBFILESMediaInfo *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isPending]) {
    jsonDict[@".tag"] = @"pending";
  } else if ([valueObj isMetadata]) {
    jsonDict[@"metadata"] = [[DBFILESMediaMetadataSerializer serialize:valueObj.metadata] mutableCopy];
    jsonDict[@".tag"] = @"metadata";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag"
                                   reason:@"Object not properly initialized. Tag has an unknown value."
                                 userInfo:nil]);
  }

  return jsonDict;
}

+ (DBFILESMediaInfo *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"pending"]) {
    return [[DBFILESMediaInfo alloc] initWithPending];
  } else if ([tag isEqualToString:@"metadata"]) {
    DBFILESMediaMetadata *metadata = [DBFILESMediaMetadataSerializer deserialize:valueDict[@"metadata"]];
    return [[DBFILESMediaInfo alloc] initWithMetadata:metadata];
  }

  @throw([NSException
      exceptionWithName:@"InvalidTag"
                 reason:[NSString stringWithFormat:@"Tag has an invalid value: \"%@\".", valueDict[@".tag"]]
               userInfo:nil]);
}

@end