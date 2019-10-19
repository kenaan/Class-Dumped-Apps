//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWESlidingTabbarProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AWESlidingTabButton, AWESlidingViewController, NSArray, NSMutableArray, NSString, UIColor, UIScrollView;

@interface AWESlidingTabbarView : UIView <UIScrollViewDelegate, AWESlidingTabbarProtocol>
{
    _Bool _shouldShowTopLine;
    _Bool _shouldShowBottomLine;
    _Bool _shouldShowSelectionLine;
    _Bool _shouldShowButtonSeperationLine;
    _Bool _scrollEnabled;
    AWESlidingViewController *_slidingViewController;
    long long _selectedIndex;
    UIColor *_selectionLineColor;
    UIColor *_topBottomLineColor;
    CDUnknownBlockType _didEndDeceleratingBlock;
    UIScrollView *_scrollView;
    UIView *_lineView;
    NSMutableArray *_buttonArray;
    NSArray *_btnSeperationLineArray;
    long long _buttonStyle;
    AWESlidingTabButton *_selectedButton;
    UIView *_topLineView;
    UIView *_bottomLineView;
    double _titlePadding;
    double _titleMinLength;
    double _widthBoundary;
    long long _circleIndexForImageStyle;
    UIView *_circleSeparator;
}

@property(retain, nonatomic) UIView *circleSeparator; // @synthesize circleSeparator=_circleSeparator;
@property(nonatomic) long long circleIndexForImageStyle; // @synthesize circleIndexForImageStyle=_circleIndexForImageStyle;
@property(nonatomic) double widthBoundary; // @synthesize widthBoundary=_widthBoundary;
@property(nonatomic) double titleMinLength; // @synthesize titleMinLength=_titleMinLength;
@property(nonatomic) double titlePadding; // @synthesize titlePadding=_titlePadding;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) AWESlidingTabButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) NSArray *btnSeperationLineArray; // @synthesize btnSeperationLineArray=_btnSeperationLineArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(copy, nonatomic) CDUnknownBlockType didEndDeceleratingBlock; // @synthesize didEndDeceleratingBlock=_didEndDeceleratingBlock;
@property(retain, nonatomic) UIColor *topBottomLineColor; // @synthesize topBottomLineColor=_topBottomLineColor;
@property(retain, nonatomic) UIColor *selectionLineColor; // @synthesize selectionLineColor=_selectionLineColor;
@property(nonatomic) _Bool shouldShowButtonSeperationLine; // @synthesize shouldShowButtonSeperationLine=_shouldShowButtonSeperationLine;
@property(nonatomic) _Bool shouldShowSelectionLine; // @synthesize shouldShowSelectionLine=_shouldShowSelectionLine;
@property(nonatomic) _Bool shouldShowBottomLine; // @synthesize shouldShowBottomLine=_shouldShowBottomLine;
@property(nonatomic) _Bool shouldShowTopLine; // @synthesize shouldShowTopLine=_shouldShowTopLine;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak AWESlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
- (void).cxx_destruct;
- (void)scrollViewContentOffsetDidEndChanging;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (double)tabButtonWidth;
- (double)totalButtonWidth;
- (double)getMaxButtonWidth;
- (void)configureButtonsFrame:(id)arg1;
- (void)updateSelectedLineFrame;
- (void)updateIrregularTextFrameWhenScroll:(id)arg1 animated:(_Bool)arg2;
- (void)slidingControllerDidScroll:(id)arg1;
- (void)tabButtonClicked:(id)arg1;
- (void)setupSubviews;
- (id)seperationLinesWithCount:(long long)arg1;
- (id)buttonsWithDataArray:(id)arg1 selectedDataArray:(id)arg2;
- (_Bool)isButtonDotShownOnIndex:(long long)arg1;
- (void)showButtonDot:(_Bool)arg1 index:(long long)arg2 color:(id)arg3;
- (void)configureText:(id)arg1 image:(id)arg2 selectedText:(id)arg3 selectedImage:(id)arg4 index:(long long)arg5;
- (void)configureButtonTextFont:(id)arg1 hasShadow:(_Bool)arg2;
- (void)configureTitleMinLength:(double)arg1;
- (void)configureTitlePadding:(double)arg1;
- (void)configureButtonTextFont:(id)arg1 selectedFont:(id)arg2;
- (void)configureButtonTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)insertAtFrontWithButtonImage:(id)arg1;
- (void)replaceButtonImage:(id)arg1 atIndex:(long long)arg2;
- (void)insertSeparatorCircleForImageStyleAtIndex:(long long)arg1;
- (void)resetDataArray:(id)arg1 selectedDataArray:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(long long)arg2 dataArray:(id)arg3 selectedDataArray:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

