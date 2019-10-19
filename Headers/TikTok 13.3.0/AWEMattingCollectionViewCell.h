//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEStudioBaseCollectionViewCell.h"

@class UIImageView, UIView;

@interface AWEMattingCollectionViewCell : AWEStudioBaseCollectionViewCell
{
    _Bool _customSelected;
    UIImageView *_faceImageView;
    UIView *_selectedIndicatorView;
    UIImageView *_loadingView;
}

@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *selectedIndicatorView; // @synthesize selectedIndicatorView=_selectedIndicatorView;
@property(nonatomic) _Bool customSelected; // @synthesize customSelected=_customSelected;
@property(retain, nonatomic) UIImageView *faceImageView; // @synthesize faceImageView=_faceImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configWithAlbumFaceModel:(id)arg1;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

