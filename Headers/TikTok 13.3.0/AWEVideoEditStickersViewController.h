//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESlidingViewControllerDelegate-Protocol.h"
#import "AWEVideoEditStickerCollectionVCDelegate-Protocol.h"
#import "AWEVideoThirdPartyStickerCollectionVCDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class AWESearchBar, AWESlidingTabbarView, AWESlidingViewController, AWEUILoadingView, AWEVideoPublishViewModel, AWEVideoThirdPartyStickerCollectionViewController, CAGradientLayer, IESThirdPartyResponseModel, NSArray, NSString, UIButton, UILabel, UIView;
@protocol AWEVideoEditStickersVCDelegate;

@interface AWEVideoEditStickersViewController : UIViewController <AWESlidingViewControllerDelegate, AWEVideoEditStickerCollectionVCDelegate, UIGestureRecognizerDelegate, AWEVideoThirdPartyStickerCollectionVCDelegate, UISearchBarDelegate>
{
    _Bool _canLoadingGIFs;
    id <AWEVideoEditStickersVCDelegate> _delegate;
    NSString *_loadingStickerId;
    AWEVideoPublishViewModel *_publishModel;
    AWESlidingViewController *_slidingViewController;
    AWESlidingTabbarView *_slidingTabbarView;
    UIView *_searchBarView;
    NSArray *_panels;
    NSArray *_titles;
    double _topOffset;
    AWESearchBar *_searchBar;
    UIButton *_cancelButton;
    AWEVideoThirdPartyStickerCollectionViewController *_thirdPartyStickerCollectionView;
    UIView *_errorView;
    UILabel *_errorTitleLabel;
    IESThirdPartyResponseModel *_hotResponseModel;
    NSArray *_categories;
    long long _status;
    long long _errorStatus;
    CAGradientLayer *_slidingViewGradientLayer;
    CAGradientLayer *_thirdPartyGradientLayer;
    UIView *_loadingBgView;
    AWEUILoadingView *_loadingView;
    NSString *_lastKeyword;
}

@property(retain, nonatomic) NSString *lastKeyword; // @synthesize lastKeyword=_lastKeyword;
@property(nonatomic) _Bool canLoadingGIFs; // @synthesize canLoadingGIFs=_canLoadingGIFs;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *loadingBgView; // @synthesize loadingBgView=_loadingBgView;
@property(retain, nonatomic) CAGradientLayer *thirdPartyGradientLayer; // @synthesize thirdPartyGradientLayer=_thirdPartyGradientLayer;
@property(retain, nonatomic) CAGradientLayer *slidingViewGradientLayer; // @synthesize slidingViewGradientLayer=_slidingViewGradientLayer;
@property(nonatomic) long long errorStatus; // @synthesize errorStatus=_errorStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) IESThirdPartyResponseModel *hotResponseModel; // @synthesize hotResponseModel=_hotResponseModel;
@property(retain, nonatomic) UILabel *errorTitleLabel; // @synthesize errorTitleLabel=_errorTitleLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) AWEVideoThirdPartyStickerCollectionViewController *thirdPartyStickerCollectionView; // @synthesize thirdPartyStickerCollectionView=_thirdPartyStickerCollectionView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) AWESearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSArray *panels; // @synthesize panels=_panels;
@property(retain, nonatomic) UIView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(retain, nonatomic) AWESlidingTabbarView *slidingTabbarView; // @synthesize slidingTabbarView=_slidingTabbarView;
@property(retain, nonatomic) AWESlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
@property(retain, nonatomic) NSString *loadingStickerId; // @synthesize loadingStickerId=_loadingStickerId;
@property(nonatomic) __weak id <AWEVideoEditStickersVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetThirdPartyStickerList:(id)arg1 isLoadMore:(_Bool)arg2;
- (_Bool)reuseHotData;
- (void)p_loadmoreSearchDataWithKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_fetchSearchDataWithKeyword:(id)arg1;
- (void)p_loadmoreHotDataCompletion:(CDUnknownBlockType)arg1;
- (void)p_fetchHotData;
- (void)prepareFetchData;
- (void)handlePan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeFromViewController:(id)arg1 animationView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showOnViewController:(id)arg1 animationView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadmoreThirdPartyStickers:(CDUnknownBlockType)arg1;
- (void)thirdPartyStickerCollectionViewController:(id)arg1 didSelectSticker:(id)arg2 indexPath:(id)arg3 downloadProgressBlock:(CDUnknownBlockType)arg4 downloadedBlock:(CDUnknownBlockType)arg5;
- (void)stickerCollectionViewController:(id)arg1 didSelectSticker:(id)arg2 atIndex:(long long)arg3 downloadProgressBlock:(CDUnknownBlockType)arg4 downloadedBlock:(CDUnknownBlockType)arg5;
- (void)slidingViewController:(id)arg1 didSelectIndex:(long long)arg2;
- (id)slidingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllers:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)startLoadingGifsWithKeyword:(id)arg1;
- (void)retryToFetchData;
- (void)cancelButtonClicked:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

