//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEWelcomeScreenContent-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEInterestSelectDataManager, AWEUILoadingView, NSArray, NSDate, NSMutableArray, NSString, UIButton, UICollectionView, UICollectionViewFlowLayout, UIImageView, UILabel, UIView;

@interface AWEInterestSelectViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AWEWelcomeScreenContent>
{
    CDUnknownBlockType _completionBlock;
    UIView *_topBar;
    UIButton *_skipButton;
    UILabel *_titleLabel;
    UIView *_headerView;
    UILabel *_headerTitleLabel;
    UILabel *_subtitleLabel;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    UIView *_bottomView;
    UIButton *_doneButton;
    UILabel *_doneLabel;
    UIView *_sendInterestLoadingView;
    UILabel *_sendInterestLoadingLabel;
    UIImageView *_sendInterestLoadingImageView;
    UIImageView *_sendInterestFinishImageView;
    AWEUILoadingView *_loadingView;
    AWEInterestSelectDataManager *_dataManager;
    NSArray *_interestList;
    NSMutableArray *_selectedInterestList;
    NSDate *_appearTime;
    NSMutableArray *_displayedInterests;
}

@property(retain, nonatomic) NSMutableArray *displayedInterests; // @synthesize displayedInterests=_displayedInterests;
@property(retain, nonatomic) NSDate *appearTime; // @synthesize appearTime=_appearTime;
@property(retain, nonatomic) NSMutableArray *selectedInterestList; // @synthesize selectedInterestList=_selectedInterestList;
@property(copy, nonatomic) NSArray *interestList; // @synthesize interestList=_interestList;
@property(retain, nonatomic) AWEInterestSelectDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *sendInterestFinishImageView; // @synthesize sendInterestFinishImageView=_sendInterestFinishImageView;
@property(retain, nonatomic) UIImageView *sendInterestLoadingImageView; // @synthesize sendInterestLoadingImageView=_sendInterestLoadingImageView;
@property(retain, nonatomic) UILabel *sendInterestLoadingLabel; // @synthesize sendInterestLoadingLabel=_sendInterestLoadingLabel;
@property(retain, nonatomic) UIView *sendInterestLoadingView; // @synthesize sendInterestLoadingView=_sendInterestLoadingView;
@property(retain, nonatomic) UILabel *doneLabel; // @synthesize doneLabel=_doneLabel;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)trackInterestsDisplay;
- (void)onDoneButtonTapped:(id)arg1;
- (void)onSkipButtonTapped:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)feedDataDidLoad:(id)arg1;
- (void)showSendInterestFinish;
- (void)showSendInterestLoading;
- (void)dismiss;
- (long long)getStayTime;
- (void)enableDoneButton:(_Bool)arg1;
- (void)prefetchInterestImage;
- (void)loadDefaultInterestList;
- (void)refreshInterestList;
- (void)p_setupViews;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)p_customInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

