//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (IESSoundMappedFile)
+ (id)sound_dataWithContentsOfFile:(id)arg1 modifiable:(_Bool)arg2;
- (void)setSound_file:(id)arg1;
@property(readonly, nonatomic) NSString *sound_file;
- (void)setSound_modifiable:(_Bool)arg1;
@property(readonly, nonatomic) _Bool sound_modifiable;
- (void)sound_synchronize;
@end

