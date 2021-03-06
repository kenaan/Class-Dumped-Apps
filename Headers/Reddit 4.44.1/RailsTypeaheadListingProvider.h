//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RailsListingProvider.h"

@class AutoCompleteNetworkSourceBuilder, RailsContext, RedditService, ZeroStateSearchNetworkSourceBuilder;

@interface RailsTypeaheadListingProvider : RailsListingProvider
{
    _Bool _isAutoComplete;
    RailsContext *_railsContext;
    RedditService *_redditService;
    AutoCompleteNetworkSourceBuilder *_autoCompleteNetworkSourceBuilder;
    ZeroStateSearchNetworkSourceBuilder *_zeroStateSearchNetworkSourceBuilder;
}

@property(nonatomic) _Bool isAutoComplete; // @synthesize isAutoComplete=_isAutoComplete;
@property(retain, nonatomic) ZeroStateSearchNetworkSourceBuilder *zeroStateSearchNetworkSourceBuilder; // @synthesize zeroStateSearchNetworkSourceBuilder=_zeroStateSearchNetworkSourceBuilder;
@property(retain, nonatomic) AutoCompleteNetworkSourceBuilder *autoCompleteNetworkSourceBuilder; // @synthesize autoCompleteNetworkSourceBuilder=_autoCompleteNetworkSourceBuilder;
@property(retain, nonatomic) RedditService *redditService; // @synthesize redditService=_redditService;
@property(retain, nonatomic) RailsContext *railsContext; // @synthesize railsContext=_railsContext;
- (void).cxx_destruct;
- (id)createListingNetworkSource;
- (id)initWithRailsContext:(id)arg1 redditService:(id)arg2;

@end

