//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@interface IESMMQRCode : IESMMObject
{
    void *_handle;
}

@property(nonatomic) void *handle; // @synthesize handle=_handle;
- (id)imageRefFromBGRABytes:(char *)arg1 imageSize:(struct CGSize)arg2;
- (void)createQRCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
