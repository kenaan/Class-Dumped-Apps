//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCXAnimatableTextureSprite.h"

@class NSString, SCMapBitmojiSticker, SCXSpeechBubbleSprite, SCXSprite, SCXSpriteTextureAnimator, UIColor;

@interface SCXBitmojiSprite : SCXAnimatableTextureSprite
{
    _Bool _clustered;
    _Bool _faded;
    NSString *_userId;
    NSString *_avatarId;
    SCMapBitmojiSticker *_sticker;
    UIColor *_missingBitmojiColor;
    unsigned long long _clusteredDirection;
    SCXSprite *_shadowSprite;
    SCXSpeechBubbleSprite *_speechBubbleSprite;
    SCXSpriteTextureAnimator *_textureAnimator;
    struct CGPoint _speechBubbleOffset;
}

@property(retain, nonatomic) SCXSpriteTextureAnimator *textureAnimator; // @synthesize textureAnimator=_textureAnimator;
@property(nonatomic) struct CGPoint speechBubbleOffset; // @synthesize speechBubbleOffset=_speechBubbleOffset;
@property(readonly, nonatomic) SCXSpeechBubbleSprite *speechBubbleSprite; // @synthesize speechBubbleSprite=_speechBubbleSprite;
@property(readonly, nonatomic) SCXSprite *shadowSprite; // @synthesize shadowSprite=_shadowSprite;
@property(nonatomic, getter=isFaded) _Bool faded; // @synthesize faded=_faded;
@property(nonatomic) unsigned long long clusteredDirection; // @synthesize clusteredDirection=_clusteredDirection;
@property(nonatomic, getter=isClustered) _Bool clustered; // @synthesize clustered=_clustered;
@property(retain, nonatomic) UIColor *missingBitmojiColor; // @synthesize missingBitmojiColor=_missingBitmojiColor;
@property(copy, nonatomic) SCMapBitmojiSticker *sticker; // @synthesize sticker=_sticker;
@property(copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDUnknownBlockType)_newSpeechBubbleWidthInterpolator;
- (CDUnknownBlockType)_speechBubbleLocationInterpolatorForLocationInterpolator:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_shadowLocationForLocation:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_newShadowWidthInterpolatorForWidthInterpolator:(CDUnknownBlockType)arg1;
- (float)_desiredShadowSpriteOpacity;
- (_Bool)textureRequiredForMapLoaded;
- (void)animateToWidthInterpolator:(CDUnknownBlockType)arg1 duration:(double)arg2 interpolation:(CDUnknownBlockType)arg3 mapViewport:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setWidthInterpolator:(CDUnknownBlockType)arg1;
- (void)animateToLocationInterpolator:(CDUnknownBlockType)arg1 duration:(double)arg2 interpolation:(CDUnknownBlockType)arg3 mapViewport:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setLocationInterpolator:(CDUnknownBlockType)arg1;
- (void)setZIndex:(id)arg1;
- (void)setOpacity:(float)arg1;
- (struct CGRect)touchRectInMapViewport:(id)arg1 view:(id)arg2;
- (id)init;
- (_Bool)displaysGhostModeAvatar;
- (id)effectiveStickerId;

@end

