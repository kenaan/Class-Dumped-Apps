//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESMMMediaSizeUtil : NSObject
{
}

+ (struct CGSize)getScaletoSize:(struct CGSize)arg1 withSourceSize:(struct CGSize)arg2;
+ (struct CGSize)getUpscaletoSize:(struct CGSize)arg1 withSourceSize:(struct CGSize)arg2;
+ (struct CGSize)getBrushUpscaleSizeWithSourceSize:(struct CGSize)arg1;
+ (struct CGSize)getSizeWithSourceSize:(struct CGSize)arg1 targetSize:(struct CGSize)arg2;
+ (_Bool)issourceSize:(struct CGSize)arg1 exceedLimitWithTargetSize:(struct CGSize)arg2;

@end

