//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarouselItemNode.h"

#import "ASTextNodeDelegate-Protocol.h"

@class ASDisplayNode, ASTextNode, CarouselItemCommentNode, Comment, FeedPostThumbnailNode, NSObject, NSString, Post, SubscribableButtonNode;
@protocol CarouselItemCompactPostNodeDelegate;

@interface CarouselItemCompactPostNode : CarouselItemNode <ASTextNodeDelegate>
{
    _Bool _shouldDisplaySubredditHeader;
    _Bool _shouldDisplayScore;
    _Bool _displayCommentNode;
    _Bool _hasCompactThumbnail;
    Post *_post;
    Comment *_comment;
    ASTextNode *_preHeaderTextNode;
    SubscribableButtonNode *_subredditIconNode;
    ASTextNode *_subredditHeaderTextNode;
    ASTextNode *_titleContentNode;
    FeedPostThumbnailNode *_thumbnailNode;
    ASTextNode *_scoreNode;
    ASDisplayNode *_divider;
    CarouselItemCommentNode *_commentNode;
}

@property(retain, nonatomic) CarouselItemCommentNode *commentNode; // @synthesize commentNode=_commentNode;
@property(retain, nonatomic) ASDisplayNode *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) ASTextNode *scoreNode; // @synthesize scoreNode=_scoreNode;
@property(retain, nonatomic) FeedPostThumbnailNode *thumbnailNode; // @synthesize thumbnailNode=_thumbnailNode;
@property(retain, nonatomic) ASTextNode *titleContentNode; // @synthesize titleContentNode=_titleContentNode;
@property(retain, nonatomic) ASTextNode *subredditHeaderTextNode; // @synthesize subredditHeaderTextNode=_subredditHeaderTextNode;
@property(retain, nonatomic) SubscribableButtonNode *subredditIconNode; // @synthesize subredditIconNode=_subredditIconNode;
@property(retain, nonatomic) ASTextNode *preHeaderTextNode; // @synthesize preHeaderTextNode=_preHeaderTextNode;
@property(nonatomic) _Bool hasCompactThumbnail; // @synthesize hasCompactThumbnail=_hasCompactThumbnail;
@property(nonatomic) _Bool displayCommentNode; // @synthesize displayCommentNode=_displayCommentNode;
@property(nonatomic) _Bool shouldDisplayScore; // @synthesize shouldDisplayScore=_shouldDisplayScore;
@property(nonatomic) _Bool shouldDisplaySubredditHeader; // @synthesize shouldDisplaySubredditHeader=_shouldDisplaySubredditHeader;
@property(retain, nonatomic) Comment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (id)scoreText;
- (id)postTitleText;
- (id)subredditHeaderText;
- (_Bool)textNode:(id)arg1 shouldHighlightLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (void)didTapComment:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configurePreTextNode;
- (void)configureSubredditHeaderNode;
- (void)configureScoreNode;
- (void)configureTitleNode;
- (void)createScoreNode;
- (void)createSubredditHeaderNode;
- (void)createNodes;
- (void)didLoad;
- (id)initWithCarouselItem:(id)arg1 comment:(id)arg2;
- (void)createCommentNode;
@property(readonly, nonatomic) _Bool shouldDisplayThumbnail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak NSObject<CarouselItemCompactPostNodeDelegate> *delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
