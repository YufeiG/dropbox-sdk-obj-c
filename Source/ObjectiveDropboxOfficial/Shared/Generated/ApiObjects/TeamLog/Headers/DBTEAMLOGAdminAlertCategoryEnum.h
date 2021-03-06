///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGAdminAlertCategoryEnum;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AdminAlertCategoryEnum` union.
///
/// Alert category
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGAdminAlertCategoryEnum : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGAdminAlertCategoryEnumTag` enum type represents the possible
/// tag states with which the `DBTEAMLOGAdminAlertCategoryEnum` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGAdminAlertCategoryEnumTag){
    /// (no description).
    DBTEAMLOGAdminAlertCategoryEnumAccountTakeover,

    /// (no description).
    DBTEAMLOGAdminAlertCategoryEnumDataLossProtection,

    /// (no description).
    DBTEAMLOGAdminAlertCategoryEnumMalwareSharing,

    /// (no description).
    DBTEAMLOGAdminAlertCategoryEnumMassiveFileOperation,

    /// (no description).
    DBTEAMLOGAdminAlertCategoryEnumNa,

    /// (no description).
    DBTEAMLOGAdminAlertCategoryEnumThreatManagement,

    /// (no description).
    DBTEAMLOGAdminAlertCategoryEnumOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGAdminAlertCategoryEnumTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "account_takeover".
///
/// @return An initialized instance.
///
- (instancetype)initWithAccountTakeover;

///
/// Initializes union class with tag state of "data_loss_protection".
///
/// @return An initialized instance.
///
- (instancetype)initWithDataLossProtection;

///
/// Initializes union class with tag state of "malware_sharing".
///
/// @return An initialized instance.
///
- (instancetype)initWithMalwareSharing;

///
/// Initializes union class with tag state of "massive_file_operation".
///
/// @return An initialized instance.
///
- (instancetype)initWithMassiveFileOperation;

///
/// Initializes union class with tag state of "na".
///
/// @return An initialized instance.
///
- (instancetype)initWithNa;

///
/// Initializes union class with tag state of "threat_management".
///
/// @return An initialized instance.
///
- (instancetype)initWithThreatManagement;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "account_takeover".
///
/// @return Whether the union's current tag state has value "account_takeover".
///
- (BOOL)isAccountTakeover;

///
/// Retrieves whether the union's current tag state has value
/// "data_loss_protection".
///
/// @return Whether the union's current tag state has value
/// "data_loss_protection".
///
- (BOOL)isDataLossProtection;

///
/// Retrieves whether the union's current tag state has value "malware_sharing".
///
/// @return Whether the union's current tag state has value "malware_sharing".
///
- (BOOL)isMalwareSharing;

///
/// Retrieves whether the union's current tag state has value
/// "massive_file_operation".
///
/// @return Whether the union's current tag state has value
/// "massive_file_operation".
///
- (BOOL)isMassiveFileOperation;

///
/// Retrieves whether the union's current tag state has value "na".
///
/// @return Whether the union's current tag state has value "na".
///
- (BOOL)isNa;

///
/// Retrieves whether the union's current tag state has value
/// "threat_management".
///
/// @return Whether the union's current tag state has value "threat_management".
///
- (BOOL)isThreatManagement;

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
/// The serialization class for the `DBTEAMLOGAdminAlertCategoryEnum` union.
///
@interface DBTEAMLOGAdminAlertCategoryEnumSerializer : NSObject

///
/// Serializes `DBTEAMLOGAdminAlertCategoryEnum` instances.
///
/// @param instance An instance of the `DBTEAMLOGAdminAlertCategoryEnum` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGAdminAlertCategoryEnum` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGAdminAlertCategoryEnum *)instance;

///
/// Deserializes `DBTEAMLOGAdminAlertCategoryEnum` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGAdminAlertCategoryEnum` API object.
///
/// @return An instantiation of the `DBTEAMLOGAdminAlertCategoryEnum` object.
///
+ (DBTEAMLOGAdminAlertCategoryEnum *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
