//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TemplateParserContext-Protocol.h"

@class CustomFeedRailsQueryContext, ListingNetworkSource, NSArray, NSDictionary, NSString, PostFlairRailsQueryContext, RailsAnalyticsContext, SubredditCategoryRailsQueryContext, SubredditRailsQueryContext;

@interface RailsContext : NSObject <NSCopying, NSCoding, TemplateParserContext>
{
    _Bool _isTypeaheadActive;
    _Bool _isFilterChangeIntent;
    NSDictionary *_cachedResults;
    NSString *_query;
    NSString *_sort;
    NSString *_time;
    unsigned long long _queryOrigin;
    NSString *_currentSort;
    NSString *_currentTime;
    ListingNetworkSource *_listingNetworkSourceOverride;
    RailsAnalyticsContext *_analyticsContext;
    NSArray *_queryContexts;
    CDUnknownBlockType _railsQueryResolver;
}

+ (id)universalEndpointSourceFromOrigin:(unsigned long long)arg1;
+ (id)combinedQueryFromContexts:(id)arg1 query:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType railsQueryResolver; // @synthesize railsQueryResolver=_railsQueryResolver;
@property(copy, nonatomic) NSArray *queryContexts; // @synthesize queryContexts=_queryContexts;
@property(retain, nonatomic) RailsAnalyticsContext *analyticsContext; // @synthesize analyticsContext=_analyticsContext;
@property(retain, nonatomic) ListingNetworkSource *listingNetworkSourceOverride; // @synthesize listingNetworkSourceOverride=_listingNetworkSourceOverride;
@property(copy, nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) NSString *currentSort; // @synthesize currentSort=_currentSort;
@property(nonatomic) unsigned long long queryOrigin; // @synthesize queryOrigin=_queryOrigin;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) _Bool isFilterChangeIntent; // @synthesize isFilterChangeIntent=_isFilterChangeIntent;
@property(nonatomic) _Bool isTypeaheadActive; // @synthesize isTypeaheadActive=_isTypeaheadActive;
@property(copy, nonatomic) NSDictionary *cachedResults; // @synthesize cachedResults=_cachedResults;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *universalEndpointSource;
- (id)valueForTemplateName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeQueryContext:(id)arg1;
- (id)queryContextForIdentifier:(id)arg1;
- (void)performSearchWithListingNetworkSource:(id)arg1;
- (void)performSearchWithRailsContext:(id)arg1 queryOrigin:(unsigned long long)arg2;
- (void)searchWithQuery:(id)arg1 pillIdentifiers:(id)arg2 typeahead:(_Bool)arg3 sortParam:(id)arg4 timeParam:(id)arg5 isFilterChangeIntent:(_Bool)arg6 queryOrigin:(unsigned long long)arg7;
- (void)performSearchWithQuery:(id)arg1 typeahead:(_Bool)arg2 queryOrigin:(unsigned long long)arg3;
- (void)performSearchWithQuery:(id)arg1 queryOrigin:(unsigned long long)arg2;
- (id)resolveWithContextObjects:(id)arg1;
- (void)updateQuery:(id)arg1 attemptAutopill:(_Bool)arg2 shouldRecommendSortTime:(_Bool)arg3;
- (void)updateQuery:(id)arg1 attemptAutopill:(_Bool)arg2;
- (_Bool)shouldShortcutToUserOrSubreddit;
@property(readonly, nonatomic) NSArray *pillIdentifiers;
@property(readonly, nonatomic) CustomFeedRailsQueryContext *customFeedContext;
@property(readonly, nonatomic) PostFlairRailsQueryContext *postFlairContext;
@property(readonly, nonatomic) SubredditRailsQueryContext *subredditContext;
@property(readonly, nonatomic) SubredditCategoryRailsQueryContext *categoryContext;
@property(readonly, nonatomic) NSString *combinedQuery;
- (id)recommendedTimeWithResolvedQuery:(id)arg1;
- (id)recommendedSortWithResolvedQuery:(id)arg1;
- (id)resolvedQuery:(id)arg1;
- (_Bool)hasOnlyCategory:(id)arg1 andQuery:(id)arg2;
- (id)resolveFromURLQuery:(id)arg1;
@property(readonly, nonatomic) unsigned long long preferredSearchMode;
@property(readonly, nonatomic) _Bool isTypeaheadAvailable;
- (id)initWithAnalyticsContext:(id)arg1 defaultTypeahead:(_Bool)arg2 queryOrigin:(unsigned long long)arg3;
- (id)initWithAnalyticsContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

