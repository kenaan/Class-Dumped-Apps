//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWECompanyChallengeViewController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEUserModel, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UILabel;

@interface AWECompanyChallengeViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWECompanyChallengeViewController>
{
    AWEUserModel *_user;
    NSMutableArray *_challengeList;
    NSString *_referString;
    UILabel *_titleLabel;
    UICollectionView *_collectionView;
    NSMutableDictionary *_trackDict;
}

+ (_Bool)isSame:(id)arg1 with:(id)arg2;
+ (double)recommendHeight;
@property(retain, nonatomic) NSMutableDictionary *trackDict; // @synthesize trackDict=_trackDict;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) NSMutableArray *challengeList; // @synthesize challengeList=_challengeList;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_layoutSubViewsFrame;
- (void)_setupUI;
- (void)configWithStarModel:(id)arg1;
- (void)configWithModel:(id)arg1 isLogSent:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

