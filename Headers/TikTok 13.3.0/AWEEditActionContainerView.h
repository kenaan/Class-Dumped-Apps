//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class AWEEditActionContainerViewLayout, NSArray;

@interface AWEEditActionContainerView : UIScrollView
{
    NSArray *_itemDatas;
    NSArray *_itemViews;
    AWEEditActionContainerViewLayout *_containerViewLayout;
}

@property(readonly, nonatomic) AWEEditActionContainerViewLayout *containerViewLayout; // @synthesize containerViewLayout=_containerViewLayout;
@property(copy, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(copy, nonatomic) NSArray *itemDatas; // @synthesize itemDatas=_itemDatas;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)itemSizeWithItem:(id)arg1;
- (struct CGSize)intrinsicContentSizeForItemsInRange:(struct _NSRange)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithItemDatas:(id)arg1 containerViewLayout:(id)arg2;
- (void)dealloc;

@end

