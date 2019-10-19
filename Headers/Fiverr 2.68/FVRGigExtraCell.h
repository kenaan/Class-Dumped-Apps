//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FVRGigExtra, NSIndexPath, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;
@protocol FVRGigExtraCellDelegate;

@interface FVRGigExtraCell : UITableViewCell
{
    _Bool _extraFastPreSelected;
    _Bool _isExpandable;
    _Bool _isLoaded;
    int _gigItemMaxAllowdQuantity;
    FVRGigExtra *_extraItem;
    id <FVRGigExtraCellDelegate> _delegate;
    NSIndexPath *_indexPathCell;
    UIButton *_selectButton;
    UILabel *_lblExtraName;
    UILabel *_lblExtraPrice;
    UIImageView *_plusImage;
    NSLayoutConstraint *_priceLabelHeightConstraint;
    UILabel *_lblExtraDuration;
    UIView *_expandedView;
    UILabel *_quantityTitleLabel;
    UILabel *_quantityLabel;
}

+ (double)heightWithExtraText:(id)arg1 isExpanded:(_Bool)arg2;
+ (double)heightWithExtraText:(id)arg1;
@property(nonatomic) int gigItemMaxAllowdQuantity; // @synthesize gigItemMaxAllowdQuantity=_gigItemMaxAllowdQuantity;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) __weak UILabel *quantityLabel; // @synthesize quantityLabel=_quantityLabel;
@property(nonatomic) __weak UILabel *quantityTitleLabel; // @synthesize quantityTitleLabel=_quantityTitleLabel;
@property(nonatomic) __weak UIView *expandedView; // @synthesize expandedView=_expandedView;
@property(nonatomic) __weak UILabel *lblExtraDuration; // @synthesize lblExtraDuration=_lblExtraDuration;
@property(nonatomic) __weak NSLayoutConstraint *priceLabelHeightConstraint; // @synthesize priceLabelHeightConstraint=_priceLabelHeightConstraint;
@property(nonatomic) __weak UIImageView *plusImage; // @synthesize plusImage=_plusImage;
@property(nonatomic) __weak UILabel *lblExtraPrice; // @synthesize lblExtraPrice=_lblExtraPrice;
@property(nonatomic) __weak UILabel *lblExtraName; // @synthesize lblExtraName=_lblExtraName;
@property(nonatomic) __weak UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) NSIndexPath *indexPathCell; // @synthesize indexPathCell=_indexPathCell;
@property(nonatomic) __weak id <FVRGigExtraCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isExpandable; // @synthesize isExpandable=_isExpandable;
@property(nonatomic) _Bool extraFastPreSelected; // @synthesize extraFastPreSelected=_extraFastPreSelected;
@property(retain, nonatomic) FVRGigExtra *extraItem; // @synthesize extraItem=_extraItem;
- (void).cxx_destruct;
- (void)selectGigExtra:(id)arg1;
- (void)quantityMinusButtonClicked:(id)arg1;
- (void)quantityPlusButtonClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateDurationLabel;
- (void)updateExtraPriceLabel:(_Bool)arg1;
- (void)setExtraText:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideSelectButton;
- (void)hidePriceAndDuration;
- (void)configureWith:(id)arg1 maxQuantity:(int)arg2 indexPath:(id)arg3;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
