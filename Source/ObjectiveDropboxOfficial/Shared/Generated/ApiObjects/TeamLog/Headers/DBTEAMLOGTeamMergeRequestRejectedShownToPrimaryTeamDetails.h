///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMergeRequestRejectedShownToPrimaryTeamDetails` struct.
///
/// Rejected a team merge request.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The secondary team name.
@property (nonatomic, readonly, copy) NSString *secondaryTeam;

/// The name of the secondary team admin who sent the request originally.
@property (nonatomic, readonly, copy) NSString *sentBy;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param secondaryTeam The secondary team name.
/// @param sentBy The name of the secondary team admin who sent the request
/// originally.
///
/// @return An initialized instance.
///
- (instancetype)initWithSecondaryTeam:(NSString *)secondaryTeam sentBy:(NSString *)sentBy;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `TeamMergeRequestRejectedShownToPrimaryTeamDetails` struct.
///
@interface DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:
    (DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails` object.
///
+ (DBTEAMLOGTeamMergeRequestRejectedShownToPrimaryTeamDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
