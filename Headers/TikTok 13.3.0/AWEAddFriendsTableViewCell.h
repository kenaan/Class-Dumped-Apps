//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UICollectionView, UIView;

@interface AWEAddFriendsTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    CDUnknownBlockType _contactTappedBlock;
    CDUnknownBlockType _commandTappedBlock;
    CDUnknownBlockType _scanTappedBlock;
    CDUnknownBlockType _radarTappedBlock;
    UICollectionView *_collectionView;
    UIView *_bottomLineView;
    NSMutableArray *_iconArray;
}

+ (id)identifier;
+ (double)suggestedHeight;
@property(retain, nonatomic) NSMutableArray *iconArray; // @synthesize iconArray=_iconArray;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType radarTappedBlock; // @synthesize radarTappedBlock=_radarTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType scanTappedBlock; // @synthesize scanTappedBlock=_scanTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType commandTappedBlock; // @synthesize commandTappedBlock=_commandTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType contactTappedBlock; // @synthesize contactTappedBlock=_contactTappedBlock;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupUI;
- (void)constructIconArray;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

