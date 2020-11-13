///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTeamMembershipType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMembershipType` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMembershipType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGTeamMembershipTypeTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGTeamMembershipType` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGTeamMembershipTypeTag){
    /// (no description).
    DBTEAMLOGTeamMembershipTypeFree,

    /// (no description).
    DBTEAMLOGTeamMembershipTypeFull,

    /// (no description).
    DBTEAMLOGTeamMembershipTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGTeamMembershipTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "free".
///
/// @return An initialized instance.
///
- (instancetype)initWithFree;

///
/// Initializes union class with tag state of "full".
///
/// @return An initialized instance.
///
- (instancetype)initWithFull;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "free".
///
/// @return Whether the union's current tag state has value "free".
///
- (BOOL)isFree;

///
/// Retrieves whether the union's current tag state has value "full".
///
/// @return Whether the union's current tag state has value "full".
///
- (BOOL)isFull;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGTeamMembershipType` union.
///
@interface DBTEAMLOGTeamMembershipTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMembershipType` instances.
///
/// @param instance An instance of the `DBTEAMLOGTeamMembershipType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMembershipType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTeamMembershipType *)instance;

///
/// Deserializes `DBTEAMLOGTeamMembershipType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMembershipType` API object.
///
/// @return An instantiation of the `DBTEAMLOGTeamMembershipType` object.
///
+ (DBTEAMLOGTeamMembershipType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
