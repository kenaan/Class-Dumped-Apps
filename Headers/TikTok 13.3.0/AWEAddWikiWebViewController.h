//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEWebViewController.h"

#import "WKNavigationDelegate-Protocol.h"

@class AWEEnhancedCollectionButton, AWEVideoPublishViewModel, NSString, UIColor, UIView;

@interface AWEAddWikiWebViewController : AWEWebViewController <WKNavigationDelegate>
{
    _Bool _showMoreButton;
    _Bool _disbaleTitleTranslation;
    _Bool _shouldShowSecondCloseButton;
    _Bool _enableLink;
    _Bool _willShowAddButton;
    _Bool _willHideNavigationBar;
    UIColor *_containerBackColor;
    UIColor *_navigationBarColor;
    UIColor *_navigationBarTintColor;
    AWEVideoPublishViewModel *_publishViewModel;
    CDUnknownBlockType _addActionBlock;
    CDUnknownBlockType _messageBlock;
    struct NSString *_backButtonStyle;
    NSString *_keyWord;
    NSString *_language;
    NSString *_searchWord;
    UIColor *_styleColor;
    AWEEnhancedCollectionButton *_addButton;
    UIView *_coverView;
}

@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool willHideNavigationBar; // @synthesize willHideNavigationBar=_willHideNavigationBar;
@property(retain, nonatomic) AWEEnhancedCollectionButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIColor *styleColor; // @synthesize styleColor=_styleColor;
@property(nonatomic) _Bool willShowAddButton; // @synthesize willShowAddButton=_willShowAddButton;
@property(retain, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(nonatomic) _Bool enableLink; // @synthesize enableLink=_enableLink;
@property(nonatomic) _Bool shouldShowSecondCloseButton; // @synthesize shouldShowSecondCloseButton=_shouldShowSecondCloseButton;
@property(retain, nonatomic) NSString *backButtonStyle; // @synthesize backButtonStyle=_backButtonStyle;
@property(copy, nonatomic) CDUnknownBlockType messageBlock; // @synthesize messageBlock=_messageBlock;
@property(copy, nonatomic) CDUnknownBlockType addActionBlock; // @synthesize addActionBlock=_addActionBlock;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
- (void)setNavigationBarTintColor:(id)arg1;
- (id)navigationBarTintColor;
- (void)setDisbaleTitleTranslation:(_Bool)arg1;
- (_Bool)disbaleTitleTranslation;
- (void)setNavigationBarColor:(id)arg1;
- (id)navigationBarColor;
- (void)setContainerBackColor:(id)arg1;
- (id)containerBackColor;
- (void)setShowMoreButton:(_Bool)arg1;
- (_Bool)showMoreButton;
- (void).cxx_destruct;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)updateNavigationItemOnErrorIfNeeded;
- (id)webViewBackgroundColor;
- (long long)kernel;
- (void)updateNavigationItem;
- (id)closeButtonImage;
- (id)backButtonImage;
- (void)setNaviBarHiddenOnly:(_Bool)arg1;
- (void)setNaviBarHiddenAndRemakeConstraint:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)trackWikipediaAddSucceed:(_Bool)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)addButtonClicked;
- (void)backButtonClicked;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
