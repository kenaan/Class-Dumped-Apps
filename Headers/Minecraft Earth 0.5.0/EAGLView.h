//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EAGLContext;

@interface EAGLView : UIView
{
    int framebufferWidth;
    int framebufferHeight;
    unsigned int defaultFramebuffer;
    unsigned int colorRenderbuffer;
    unsigned int _depthRenderBuffer;
    float viewScale;
    EAGLContext *context;
}

+ (Class)layerClass;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context;
- (_Bool)isMultipleTouchEnabled;
- (void)layoutSubviews;
- (_Bool)presentFramebuffer;
- (void)setFramebuffer;
- (void)deleteFramebuffer;
- (void)createFramebuffer;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

