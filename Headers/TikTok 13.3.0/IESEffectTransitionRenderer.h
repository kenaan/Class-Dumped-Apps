//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESMMEffectConfig, NSString;

@interface IESEffectTransitionRenderer : NSObject
{
    double _progress;
    void *_renderMangerHandle;
    IESMMEffectConfig *_effectConfig;
    NSString *_preResourcePath;
}

@property(copy, nonatomic) NSString *preResourcePath; // @synthesize preResourcePath=_preResourcePath;
@property(retain, nonatomic) IESMMEffectConfig *effectConfig; // @synthesize effectConfig=_effectConfig;
@property(nonatomic) void *renderMangerHandle; // @synthesize renderMangerHandle=_renderMangerHandle;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)checkEffectError:(int)arg1 msg:(id)arg2;
- (_Bool)checkInputParamsIsValid:(struct CGSize)arg1;
- (_Bool)setupEngineHandler;
- (void)setTransitionInfo:(id)arg1 outputTexture:(unsigned int)arg2;
- (void)setLoadResourceTimeout:(int)arg1;
- (void)setDuration:(double)arg1;
- (void)setResolution:(struct CGSize)arg1;
- (void)setPath:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCanvasSize:(struct CGSize)arg1;

@end

