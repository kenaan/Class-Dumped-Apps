//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEPOIProductCellProtocol-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface AWEPOIProductStyleBCell : UICollectionViewCell <AWEPOIProductCellProtocol>
{
    UILabel *_tagLabel;
    UIImageView *_productImage;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UIButton *_bottomButton;
    UITapGestureRecognizer *_tap;
    NSString *_buttonUrl;
    NSString *_productUrl;
    NSString *_podID;
    NSString *_productID;
    CDUnknownBlockType _contentTapBlock;
    CDUnknownBlockType _btnTapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType btnTapBlock; // @synthesize btnTapBlock=_btnTapBlock;
@property(copy, nonatomic) CDUnknownBlockType contentTapBlock; // @synthesize contentTapBlock=_contentTapBlock;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *podID; // @synthesize podID=_podID;
@property(copy, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(copy, nonatomic) NSString *buttonUrl; // @synthesize buttonUrl=_buttonUrl;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *productImage; // @synthesize productImage=_productImage;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
- (void).cxx_destruct;
- (void)tapAction;
- (void)configWithModel:(id)arg1 contentTapBlock:(CDUnknownBlockType)arg2 btnTapBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

