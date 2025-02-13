//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCommentBaseCtrl.h"

#import "XMCommentCommonCellDelegate-Protocol.h"
#import "XMCommentInputBarDelegate-Protocol.h"

@class CDZAttributedString, NSMutableArray, NSNumber, NSString, XMCommentInputBar, XMMMoment, XMMUserInfo;

@interface XMMCommentBaseCtrl : XMCommentBaseCtrl <XMCommentCommonCellDelegate, XMCommentInputBarDelegate>
{
    _Bool _isReqeustingMomentInfo;
    _Bool _isReqeustingMyInfo;
    _Bool _isRequestingConfig;
    _Bool _hasEverLoadedCommentData;
    unsigned long long _momentId;
    XMMMoment *_moment;
    XMMUserInfo *_myInfo;
    NSNumber *_canCommentNumber;
    NSString *_canNotCommentReason;
    NSMutableArray *_hotCommentLayoutArray;
    NSMutableArray *_commentLayoutArray;
    long long _commentTotalCount;
    CDZAttributedString *_sectionHeaderString;
    XMCommentInputBar *_inputBar;
}

@property(retain, nonatomic) XMCommentInputBar *inputBar; // @synthesize inputBar=_inputBar;
@property(retain, nonatomic) CDZAttributedString *sectionHeaderString; // @synthesize sectionHeaderString=_sectionHeaderString;
@property(readonly, nonatomic) _Bool hasEverLoadedCommentData; // @synthesize hasEverLoadedCommentData=_hasEverLoadedCommentData;
@property(nonatomic) long long commentTotalCount; // @synthesize commentTotalCount=_commentTotalCount;
@property(retain, nonatomic) NSMutableArray *commentLayoutArray; // @synthesize commentLayoutArray=_commentLayoutArray;
@property(retain, nonatomic) NSMutableArray *hotCommentLayoutArray; // @synthesize hotCommentLayoutArray=_hotCommentLayoutArray;
@property(readonly, nonatomic) NSString *canNotCommentReason; // @synthesize canNotCommentReason=_canNotCommentReason;
@property(readonly, nonatomic) NSNumber *canCommentNumber; // @synthesize canCommentNumber=_canCommentNumber;
@property(readonly, nonatomic) XMMUserInfo *myInfo; // @synthesize myInfo=_myInfo;
@property(retain, nonatomic) XMMMoment *moment; // @synthesize moment=_moment;
@property(nonatomic) unsigned long long momentId; // @synthesize momentId=_momentId;
- (void).cxx_destruct;
- (_Bool)shouldShowEmptyView;
- (void)didCommentWithComment:(id)arg1;
- (void)didDispraiseComment:(id)arg1 inCell:(id)arg2;
- (void)didPraiseComment:(id)arg1 inCell:(id)arg2;
- (void)didDeleteComment:(id)arg1 inCell:(id)arg2;
- (long long)indexOfCommentLayout:(id)arg1;
- (void)didTapBookMark:(id)arg1 range:(struct _NSRange)arg2 commentLayout:(id)arg3;
- (void)addTapBookMarkBlockToCommentLayout:(id)arg1;
- (void)pushCommentDetailController:(id)arg1 toReply:(id)arg2;
- (_Bool)canCommentAndShowTipIfCanNot;
- (id)commentLayoutFromDictionary:(id)arg1;
- (id)commentLayoutFromComemnt:(id)arg1;
- (void)commentWithText:(id)arg1 node:(id)arg2 rootComment:(id)arg3 toComment:(unsigned long long)arg4 inputController:(id)arg5;
- (void)initializeCommntInputController:(id)arg1;
- (id)presentCommentInputControlerWithRootComment:(id)arg1 toComment:(unsigned long long)arg2 toNickname:(id)arg3;
- (void)didRequestConfig;
- (void)didRequestMyInfo;
- (void)didRequestMomentInfo;
- (void)requestMyInfoIfNeeded;
- (void)requestCommunityConfigIfNeeds;
- (void)requestMomentInfoAndMyInfoAndConfigIfNeeds;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)commentCell:(id)arg1 didTapReply:(id)arg2;
- (void)commentCellDidTapReplyView:(id)arg1;
- (void)commentCellDidTapMoreReplyButton:(id)arg1;
- (void)commentCellDidTapPraiseButton:(id)arg1;
- (void)commentCellDidBeLongPressed:(id)arg1;
- (void)commentCell:(id)arg1 didTapUser:(id)arg2 inReply:(id)arg3;
- (void)commentCellDidTapAvatarImageView:(id)arg1;
- (void)commentInputBarDidBeTapped:(id)arg1;
- (void)didSelecteCellWithLayout:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)initializeCell:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)synchronizationCommentInfo:(id)arg1 toComment:(id)arg2;
- (void)receiveSynchronizationNotification:(id)arg1;
- (void)receiveDidLoginNotification:(id)arg1;
- (void)clickRightButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)willBePresented;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

