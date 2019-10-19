//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWENavigationBarView, AWEPOIRankItemWrapper, AWEPOIRankTopBannerModel, AWEPOIRankTopBannerView, AWEUILoadingView, NSArray, NSNumber, NSString, UIButton, UITableView, UITableViewCell;

@interface AWEPOIRankViewController : UIViewController <BTDRouterViewControllerProtocol, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _rankInfoLoadFailed;
    _Bool _isRequestOnAir;
    NSString *_cityCode;
    NSNumber *_poiClassCode;
    NSString *_districtCode;
    NSString *_referString;
    NSString *_subclassName;
    NSNumber *_businessAreaCode;
    NSNumber *_classOptionType;
    AWENavigationBarView *_navigationBar;
    UIButton *_backButton;
    UIButton *_videoRankButton;
    AWEPOIRankTopBannerView *_topBannerView;
    UITableView *_tableView;
    UITableViewCell *_topBannerCell;
    NSArray *_filteredList;
    AWEPOIRankTopBannerModel *_topBannerModel;
    AWEPOIRankItemWrapper *_rankItemWrapper;
    AWEUILoadingView *_loadingView;
}

+ (void)__awe__codeRunnerRun_71;
@property(nonatomic) _Bool isRequestOnAir; // @synthesize isRequestOnAir=_isRequestOnAir;
@property(nonatomic) _Bool rankInfoLoadFailed; // @synthesize rankInfoLoadFailed=_rankInfoLoadFailed;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEPOIRankItemWrapper *rankItemWrapper; // @synthesize rankItemWrapper=_rankItemWrapper;
@property(retain, nonatomic) AWEPOIRankTopBannerModel *topBannerModel; // @synthesize topBannerModel=_topBannerModel;
@property(copy, nonatomic) NSArray *filteredList; // @synthesize filteredList=_filteredList;
@property(retain, nonatomic) UITableViewCell *topBannerCell; // @synthesize topBannerCell=_topBannerCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWEPOIRankTopBannerView *topBannerView; // @synthesize topBannerView=_topBannerView;
@property(retain, nonatomic) UIButton *videoRankButton; // @synthesize videoRankButton=_videoRankButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) AWENavigationBarView *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) NSNumber *classOptionType; // @synthesize classOptionType=_classOptionType;
@property(retain, nonatomic) NSNumber *businessAreaCode; // @synthesize businessAreaCode=_businessAreaCode;
@property(copy, nonatomic) NSString *subclassName; // @synthesize subclassName=_subclassName;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(copy, nonatomic) NSString *districtCode; // @synthesize districtCode=_districtCode;
@property(retain, nonatomic) NSNumber *poiClassCode; // @synthesize poiClassCode=_poiClassCode;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
- (void).cxx_destruct;
- (void)handleGoToVideoRank;
- (double)p_bannerHeight;
- (id)p_enterMethod;
- (void)p_addLocationInfoToParams:(id)arg1;
- (id)aweui_emptyPageBelowView;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (void)handleNetworkChanged:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didClickedBack:(id)arg1;
- (void)p_setupTableView;
- (void)p_setupNavigationBar;
- (void)p_updateUI;
- (void)p_setupUI;
- (void)p_fetchFilteredPOIsWithCompletion:(CDUnknownBlockType)arg1;
- (void)p_fetchData;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRankItem:(id)arg1;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

