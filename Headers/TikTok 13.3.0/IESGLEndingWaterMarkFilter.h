//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilterGroup.h"

@class HTSGLFilterAlphaBlend, HTSGLPicture, IESGLFilterBlend;

@interface IESGLEndingWaterMarkFilter : HTSGLFilterGroup
{
    HTSGLPicture *_waterMarkPicture;
    HTSGLPicture *_gaussPicture;
    IESGLFilterBlend *_waterMarkBlendFilter;
    HTSGLFilterAlphaBlend *_gaussBlendFilter;
}

@property(retain, nonatomic) HTSGLFilterAlphaBlend *gaussBlendFilter; // @synthesize gaussBlendFilter=_gaussBlendFilter;
@property(retain, nonatomic) IESGLFilterBlend *waterMarkBlendFilter; // @synthesize waterMarkBlendFilter=_waterMarkBlendFilter;
@property(retain, nonatomic) HTSGLPicture *gaussPicture; // @synthesize gaussPicture=_gaussPicture;
@property(retain, nonatomic) HTSGLPicture *waterMarkPicture; // @synthesize waterMarkPicture=_waterMarkPicture;
- (void).cxx_destruct;
- (void)setGaussBlendIntensity:(double)arg1;
- (void)setWaterMarkBlendIntensity:(double)arg1;
- (id)initWithWaterMarkImage:(id)arg1 gaussImage:(id)arg2;

@end

