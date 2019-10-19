//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol AWECollectionViewDelegateWaterfallLayout <UICollectionViewDelegate>
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;

@optional
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumColumnSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForFooterInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 heightForFooterInSection:(long long)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 heightForHeaderInSection:(long long)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 columnCountForSection:(long long)arg3;
@end

