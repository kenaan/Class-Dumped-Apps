//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class YTIUpdateLocalAppSettingCommand;

@interface YTUpdateAppSettingResponderEvent : YTResponderEvent
{
    YTIUpdateLocalAppSettingCommand *_command;
}

+ (id)eventWithCommand:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) YTIUpdateLocalAppSettingCommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 firstResponder:(id)arg2;

@end

