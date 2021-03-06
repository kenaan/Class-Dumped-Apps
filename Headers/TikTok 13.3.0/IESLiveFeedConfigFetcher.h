//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveFeedConfig-Protocol.h"

@class HTSLiveApi, IESLiveFeedTabConfig, IESLiveFeedTabModel, NSString;
@protocol HTSKVStore, IESLiveFeedViewControllerProvider;

@interface IESLiveFeedConfigFetcher : NSObject <IESLiveFeedConfig>
{
    IESLiveFeedTabConfig *_liveFeedConfig;
    IESLiveFeedTabModel *_liveFeedTabModel;
    id <HTSKVStore> _configStore;
    HTSLiveApi *_api;
    id <IESLiveFeedViewControllerProvider> _feedVCProvider;
}

+ (id)defaultLiveTabModel;
+ (id)defaultFetcher;
@property(retain, nonatomic) id <IESLiveFeedViewControllerProvider> feedVCProvider; // @synthesize feedVCProvider=_feedVCProvider;
@property(retain, nonatomic) HTSLiveApi *api; // @synthesize api=_api;
@property(retain, nonatomic) id <HTSKVStore> configStore; // @synthesize configStore=_configStore;
@property(retain, nonatomic) IESLiveFeedTabModel *liveFeedTabModel; // @synthesize liveFeedTabModel=_liveFeedTabModel;
@property(retain, nonatomic) IESLiveFeedTabConfig *liveFeedConfig; // @synthesize liveFeedConfig=_liveFeedConfig;
- (void).cxx_destruct;
- (void)saveLocalTabModel:(id)arg1;
- (id)getLocalTabModel;
- (void)fetchFeedTabModel:(CDUnknownBlockType)arg1;
- (void)fetchTabModel:(CDUnknownBlockType)arg1;
- (void)fetchRequiredTabModel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

