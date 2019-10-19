//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESMMEffectStickerInfo, NSArray, NSString;

@protocol IESMMEffectResourceProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType playTimeCallback;
- (void)setEffectSrtData:(const struct IESSrtDdata *)arg1;
- (void)setEffectFontPath:(NSString *)arg1 faceIndex:(long long)arg2;
- (void)setMaxStickerMemoryCache:(unsigned long long)arg1;
- (void)applyMusicNodes:(NSString *)arg1;
- (void)switchFilterWithPathOne:(NSString *)arg1 pathTwo:(NSString *)arg2 progress:(double)arg3;
- (void)applyReshape:(NSString *)arg1 withIndensity:(struct IESIndensityParam_t)arg2;
- (void)applyIndensity:(struct IESIndensityParam_t)arg1 type:(long long)arg2;
- (NSArray *)getCurrentComposerNodes;
- (float)getValueForComposerNode:(NSString *)arg1 key:(NSString *)arg2;
- (_Bool)updateComposerNode:(NSString *)arg1 key:(NSString *)arg2 value:(double)arg3;
- (_Bool)replaceComposerNodesWithNew:(NSArray *)arg1 old:(NSArray *)arg2;
- (_Bool)operateComposerNodes:(NSArray *)arg1 operation:(long long)arg2;
- (_Bool)removeComposerNodes:(NSArray *)arg1;
- (_Bool)appendComposerNodes:(NSArray *)arg1;
- (_Bool)reloadComposerNodes:(NSArray *)arg1;
- (_Bool)applyComposerNodes:(NSArray *)arg1;
- (int)applyEffectKey:(NSString *)arg1 image:(NSString *)arg2;
- (int)applyEffectWithInfo:(IESMMEffectStickerInfo *)arg1 type:(long long)arg2;
- (void)setRealPlayCallback:(CDUnknownFunctionPointerType)arg1 userdata:(void *)arg2;
@end

