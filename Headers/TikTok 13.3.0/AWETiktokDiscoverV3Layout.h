//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableDictionary;
@protocol AWETiktokDiscoverV3LayoutDelegate;

@interface AWETiktokDiscoverV3Layout : UICollectionViewLayout
{
    id <AWETiktokDiscoverV3LayoutDelegate> _delegate;
    long long _columnCount;
    double _minimumColumnSpacing;
    double _minimumInteritemSpacing;
    double _minimumContentHeight;
    NSMutableArray *_columnHeights;
    NSMutableDictionary *_sectionItemAttributes;
    NSMutableArray *_allItemAttributes;
    NSMutableArray *_unionRects;
    long long _lastInterchangeColumn;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) long long lastInterchangeColumn; // @synthesize lastInterchangeColumn=_lastInterchangeColumn;
@property(retain, nonatomic) NSMutableArray *unionRects; // @synthesize unionRects=_unionRects;
@property(retain, nonatomic) NSMutableArray *allItemAttributes; // @synthesize allItemAttributes=_allItemAttributes;
@property(retain, nonatomic) NSMutableDictionary *sectionItemAttributes; // @synthesize sectionItemAttributes=_sectionItemAttributes;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(nonatomic) double minimumContentHeight; // @synthesize minimumContentHeight=_minimumContentHeight;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumColumnSpacing; // @synthesize minimumColumnSpacing=_minimumColumnSpacing;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) __weak id <AWETiktokDiscoverV3LayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)shortestColumnIndex;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)addAttributesForSection:(long long)arg1 column:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)commonInit;

@end

