// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Firestore API (firestore/v1)
// Documentation:
//   https://cloud.google.com/firestore

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Firestore query classes.
 */
@interface GTLRFirestoreQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets information about a location.
 *
 *  Method: firestore.projects.locations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirestoreCloudPlatform
 *    @c kGTLRAuthScopeFirestoreDatastore
 */
@interface GTLRFirestoreQuery_ProjectsLocationsGet : GTLRFirestoreQuery
// Previous library name was
//   +[GTLQueryFirestore queryForProjectsLocationsGetWithname:]

/** Resource name for the location. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRFirestore_Location.
 *
 *  Gets information about a location.
 *
 *  @param name Resource name for the location.
 *
 *  @return GTLRFirestoreQuery_ProjectsLocationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists information about the supported locations for this service.
 *
 *  Method: firestore.projects.locations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeFirestoreCloudPlatform
 *    @c kGTLRAuthScopeFirestoreDatastore
 */
@interface GTLRFirestoreQuery_ProjectsLocationsList : GTLRFirestoreQuery
// Previous library name was
//   +[GTLQueryFirestore queryForProjectsLocationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The resource that owns the locations collection, if applicable. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRFirestore_ListLocationsResponse.
 *
 *  Lists information about the supported locations for this service.
 *
 *  @param name The resource that owns the locations collection, if applicable.
 *
 *  @return GTLRFirestoreQuery_ProjectsLocationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
