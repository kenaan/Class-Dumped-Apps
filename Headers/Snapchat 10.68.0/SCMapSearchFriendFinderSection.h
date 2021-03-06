//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSection-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"

@class NSString, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCLazy, SCMapSearchGenericSectionConfiguration, SCMapSearchSession, SCSearchQueryStateAwareSupplementaryViewProvider;
@protocol SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCComposerNetworkingClientProtocol, SCMapFriendFinderDataProvider, SCSearchIntentHandler;

@interface SCMapSearchFriendFinderSection : NSObject <SCCollectionViewSection, SCEventAnnouncing>
{
    SCMapSearchSession *_mapSearchSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCMapSearchGenericSectionConfiguration *_currentConfig;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    id <SCMapFriendFinderDataProvider> _friendFinderDataProvider;
    SCLazy *_friendStore;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    long long _dataLoadingStatus;
}

+ (id)announcerIdentifier;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applyInitialConfiguration:(id)arg1;
- (void)_announceSearchAction:(long long)arg1;
- (id)friendFinderCellForItemAtIndexInSection:(unsigned long long)arg1 reuseIdentifier:(id)arg2;
- (unsigned long long)numberOfCellsInSection;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (id)supplementaryViewProvider;
- (id)initWithMapSearchSession:(id)arg1 configuration:(id)arg2 requestManager:(id)arg3 snapTokenProvider:(id)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

