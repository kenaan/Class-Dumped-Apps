//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CAGradientLayer, GMSIndoorBuilding, GMSIndoorState, NSString, UIColor, UIFont, UIImage, UITableView, UIView;

@interface GMSFloorPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    GMSIndoorBuilding *_building;
    GMSIndoorState *_indoorState;
    unsigned long long _activeLevelIndex;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
    UIColor *_selectionColor;
    UIImage *_placemarkIconImage;
    CAGradientLayer *_topShadowLayer;
    CAGradientLayer *_bottomShadowLayer;
    UIView *_maskView;
    UITableView *_tableView;
    long long _rowIndexToActivate;
    double _rowHeight;
    set_83b24b87 _placemarkIconLevelIDs;
    set_83b24b87 _measleLevelIDs;
    CDUnknownBlockType _logCallback;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateIcons;
- (void)updateSelection;
- (int)numRows;
- (unsigned long long)rowIndexToActivate:(unsigned long long)arg1;
- (unsigned long long)levelIndexFromCellIndex:(unsigned long long)arg1;
- (void)indoorState:(id)arg1 didChangeActiveLevel:(struct IndoorID)arg2 fromLevel:(struct IndoorID)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)recalculateShadowGradients;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setMeasleLevelIDs:(const set_83b24b87 *)arg1;
- (void)setPlacemarkIconLevelIDs:(set_83b24b87 *)arg1;
- (void)setViewFrame:(struct CGRect)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (double)heightThatFits:(double)arg1 maxRows:(int)arg2;
@property(readonly, nonatomic) const struct IndoorID *buildingID;
- (id)initWithBuilding:(id)arg1 activeLevel:(id)arg2 indoorState:(id)arg3 logCallback:(CDUnknownBlockType)arg4 backgroundImage:(id)arg5 placemarkIconImage:(id)arg6 font:(id)arg7 textColor:(id)arg8 selectedTextColor:(id)arg9 selectionColor:(id)arg10 transitionDuration:(double)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

