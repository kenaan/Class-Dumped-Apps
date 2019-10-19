//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWELanguageSelectionPopupVCAnimation-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEButton, NSArray, NSDate, NSMutableIndexSet, NSString, UICollectionView, UILabel, UIView;
@protocol AWEContentLanguageSelectionPopupViewControllerDelegate;

@interface AWEContentLanguageSelectionPopupViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWELanguageSelectionPopupVCAnimation>
{
    id <AWEContentLanguageSelectionPopupViewControllerDelegate> delegate;
    NSArray *_languageList;
    UIView *_backgroundView;
    UIView *_contentView;
    UICollectionView *_collectonView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    AWEButton *_okButton;
    AWEButton *_closeButton;
    NSMutableIndexSet *_selectIndexSet;
    NSDate *_launchDate;
    long long _launchedImageCount;
}

@property(nonatomic) long long launchedImageCount; // @synthesize launchedImageCount=_launchedImageCount;
@property(retain, nonatomic) NSDate *launchDate; // @synthesize launchDate=_launchDate;
@property(retain, nonatomic) NSMutableIndexSet *selectIndexSet; // @synthesize selectIndexSet=_selectIndexSet;
@property(retain, nonatomic) AWEButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) AWEButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectonView; // @synthesize collectonView=_collectonView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSArray *languageList; // @synthesize languageList=_languageList;
@property(nonatomic) __weak id <AWEContentLanguageSelectionPopupViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateStayTime;
- (void)didClickCloseButton;
- (void)didClickOKButton;
@property(readonly, nonatomic) UIView *containerView;
- (_Bool)prefersStatusBarHidden;
- (void)checkButtonStatus;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

