//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCHeader, UICollectionView;

@interface SCAddFriendsV2View : UIView
{
    SCHeader *_header;
    UICollectionView *_addFriendsCollectionView;
    struct UIEdgeInsets _collectionViewLayoutInsets;
}

@property(nonatomic) struct UIEdgeInsets collectionViewLayoutInsets; // @synthesize collectionViewLayoutInsets=_collectionViewLayoutInsets;
@property(readonly, nonatomic) UICollectionView *addFriendsCollectionView; // @synthesize addFriendsCollectionView=_addFriendsCollectionView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

