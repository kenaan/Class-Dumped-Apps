//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewObserver-Protocol.h"
#import "HUBComponentViewWithChildren-Protocol.h"

@class NSArray, UIStackView;
@protocol HUBComponentViewChildDelegate;

@interface SPTHomeUIHabitsComponentView : HUGSThemableComponentView <HUBComponentViewWithChildren, HUBComponentViewObserver>
{
    id <HUBComponentViewChildDelegate> childDelegate;
    UIStackView *_rowContainer;
    NSArray *_componentViews;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(copy, nonatomic) NSArray *componentViews; // @synthesize componentViews=_componentViews;
@property(retain, nonatomic) UIStackView *rowContainer; // @synthesize rowContainer=_rowContainer;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)addRowsForViews:(id)arg1;
- (id)childComponentViewsForModel:(id)arg1;
- (void)addRowsForModel:(id)arg1;
- (void)addRowContainer;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)addGradientView;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

