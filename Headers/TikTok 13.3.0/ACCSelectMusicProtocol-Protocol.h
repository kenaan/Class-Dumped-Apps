//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol ACCRecodInputDataProtocol, ACCSelectMusicComponetCommonProtocol;

@protocol ACCSelectMusicProtocol <NSObject>
- (UIViewController<ACCSelectMusicComponetCommonProtocol> *)selectMusicNewStylePageWithType:(unsigned long long)arg1 inputData:(id <ACCRecodInputDataProtocol>)arg2 pick:(void (^)(AWEMusicModel *, NSError *))arg3 cancel:(void (^)(AWEMusicModel *))arg4;
- (UIViewController<ACCSelectMusicComponetCommonProtocol> *)selectMusicPageWithInputData:(id <ACCRecodInputDataProtocol>)arg1 pick:(void (^)(AWEMusicModel *, NSError *))arg2 cancel:(void (^)(AWEMusicModel *))arg3;
@end

