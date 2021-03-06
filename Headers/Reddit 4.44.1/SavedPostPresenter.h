//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Post, RedditService;

@interface SavedPostPresenter : NSObject
{
    RedditService *_service;
    Post *_post;
}

+ (_Bool)shouldAllowSavedPostFoldersForAccount:(id)arg1;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)saveWithCategoryName:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveWithCategoryName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unsaveWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithService:(id)arg1 post:(id)arg2;

@end

