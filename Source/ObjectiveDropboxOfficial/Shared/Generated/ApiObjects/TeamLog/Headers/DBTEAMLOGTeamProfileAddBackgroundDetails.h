///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTeamProfileAddBackgroundDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamProfileAddBackgroundDetails` struct.
///
/// Added team background to display on shared link headers.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamProfileAddBackgroundDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamProfileAddBackgroundDetails` struct.
///
@interface DBTEAMLOGTeamProfileAddBackgroundDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamProfileAddBackgroundDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamProfileAddBackgroundDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamProfileAddBackgroundDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTeamProfileAddBackgroundDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamProfileAddBackgroundDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamProfileAddBackgroundDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGTeamProfileAddBackgroundDetails`
/// object.
///
+ (DBTEAMLOGTeamProfileAddBackgroundDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
