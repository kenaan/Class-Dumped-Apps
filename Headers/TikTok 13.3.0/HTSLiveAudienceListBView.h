//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLivePopUpView.h"

#import "HTSLiveAudienceListReactions-Protocol.h"
#import "HTSLiveAudienceListTopViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class HTSLiveAudienceListStore, IESLiveAudienceListLoginButton, NSArray, NSString, UIScrollView, UIView;
@protocol HTSLiveAudienceListActions, HTSLiveDetailRouter, HTSLiveViewHierarchyProvider, IESLiveEnvironment, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveURLSchemaHandler, IESLiveUserService;

@interface HTSLiveAudienceListBView : HTSLivePopUpView <UIScrollViewDelegate, HTSLiveAudienceListTopViewDelegate, HTSLiveAudienceListReactions>
{
    _Bool _isBroadcaster;
    _Bool _isAnchor;
    _Bool _isFirstSelectTab;
    HTSLiveAudienceListStore *_store;
    UIView *_topView;
    UIScrollView *_scrollContainer;
    NSArray *_listViews;
    NSArray *_bottomViews;
    IESLiveAudienceListLoginButton *_loginButton;
    id <IESLiveTracker> _tracker;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveUserService> _userService;
    id <HTSLiveAudienceListActions> _actionCreator;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveToastFactory> _toastFactory;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveSettings> _settings;
    id <IESLiveURLSchemaHandler> _urlHandler;
}

@property(retain, nonatomic) id <IESLiveURLSchemaHandler> urlHandler; // @synthesize urlHandler=_urlHandler;
@property(nonatomic) _Bool isFirstSelectTab; // @synthesize isFirstSelectTab=_isFirstSelectTab;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <HTSLiveAudienceListActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(nonatomic) __weak id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) IESLiveAudienceListLoginButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) NSArray *bottomViews; // @synthesize bottomViews=_bottomViews;
@property(retain, nonatomic) NSArray *listViews; // @synthesize listViews=_listViews;
@property(retain, nonatomic) UIScrollView *scrollContainer; // @synthesize scrollContainer=_scrollContainer;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) HTSLiveAudienceListStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)introductionUrl;
- (void)updateStartLightCount;
- (id)showStartLightGuideCount;
- (_Bool)exceedMaxTimeCount;
- (_Bool)shouldShowStarlightView;
- (void)openStarLightIntroduction;
- (id)starLightGuideView:(double)arg1;
- (id)createBottomViewWithModel:(id)arg1 size:(struct CGSize)arg2;
- (id)createListViewWithModel:(id)arg1 size:(struct CGSize)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSelectTitleAtIndex:(unsigned long long)arg1;
- (void)showToast:(id)arg1;
- (void)showLoginPanel:(CDUnknownBlockType)arg1;
- (void)showGiftView;
- (void)showUserPreView:(id)arg1;
- (void)login;
- (void)loadViews;
- (void)selectedTabWithRankType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

