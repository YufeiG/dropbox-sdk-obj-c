///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSHARINGMountFolderArg.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBSHARINGMountFolderArg

#pragma mark - Constructors

- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId {
  [DBStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"](sharedFolderId);

  self = [super init];
  if (self) {
    _sharedFolderId = sharedFolderId;
  }
  return self;
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBSHARINGMountFolderArgSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBSHARINGMountFolderArgSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBSHARINGMountFolderArgSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBSHARINGMountFolderArgSerializer

+ (NSDictionary *)serialize:(DBSHARINGMountFolderArg *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  jsonDict[@"shared_folder_id"] = valueObj.sharedFolderId;

  return jsonDict;
}

+ (DBSHARINGMountFolderArg *)deserialize:(NSDictionary *)valueDict {
  NSString *sharedFolderId = valueDict[@"shared_folder_id"];

  return [[DBSHARINGMountFolderArg alloc] initWithSharedFolderId:sharedFolderId];
}

@end