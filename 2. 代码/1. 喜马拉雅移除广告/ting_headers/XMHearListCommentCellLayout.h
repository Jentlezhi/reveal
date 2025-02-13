//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCommentCommonCellLayout.h"

#import "XMTableCellModelProtocol-Protocol.h"

@class NSString, XMCommentUserInfoViewLayout, XMHearListComment;

@interface XMHearListCommentCellLayout : XMCommentCommonCellLayout <XMTableCellModelProtocol>
{
    NSString *_shareButtonTitle;
    XMCommentUserInfoViewLayout *_userInfoViewLayout;
    struct CGRect _shareButtonFrame;
    struct CGRect _moreButtonFrame;
    struct CGRect _userViewFrame;
    struct CGRect _soundViewFrame;
}

+ (id)newLayout:(id)arg1 withLine:(_Bool)arg2 hideShare:(_Bool)arg3;
+ (id)newLayout:(id)arg1 withLine:(_Bool)arg2;
+ (id)newLayout:(id)arg1;
@property(readonly, nonatomic) XMCommentUserInfoViewLayout *userInfoViewLayout; // @synthesize userInfoViewLayout=_userInfoViewLayout;
@property(readonly, nonatomic) struct CGRect soundViewFrame; // @synthesize soundViewFrame=_soundViewFrame;
@property(readonly, nonatomic) struct CGRect userViewFrame; // @synthesize userViewFrame=_userViewFrame;
@property(readonly, nonatomic) struct CGRect moreButtonFrame; // @synthesize moreButtonFrame=_moreButtonFrame;
@property(readonly, nonatomic) struct CGRect shareButtonFrame; // @synthesize shareButtonFrame=_shareButtonFrame;
@property(readonly, nonatomic) NSString *shareButtonTitle; // @synthesize shareButtonTitle=_shareButtonTitle;
- (void).cxx_destruct;
- (struct CGSize)layout;
- (_Bool)isExpiredForSize:(struct CGSize)arg1 model:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) XMHearListComment *model; // @dynamic model;
@property(readonly) Class superclass;

@end

