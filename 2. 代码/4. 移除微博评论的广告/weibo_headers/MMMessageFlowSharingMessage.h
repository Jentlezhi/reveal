//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class MMMessageFlowMainPicInfo, MMMessageFlowSharingCommentInfo, MMMessageFlowSharingLikeInfo, MMNoticeStatusModel, MMNoticeVariableButtonModel, NSArray, NSDate, NSDictionary, NSString, WBCommonButtonModel, WBUser;

@interface MMMessageFlowSharingMessage : WBModelObject
{
    _Bool _deleted;
    _Bool _has_follow;
    _Bool _newData;
    NSDate *_create_at;
    NSString *_create_at_string;
    NSString *_scheme;
    WBUser *_mainUser;
    MMMessageFlowMainPicInfo *_mainPicInfo;
    WBUser *_secondaryUser;
    NSString *_pre_title;
    NSString *_title;
    NSArray *_userlist;
    NSString *_content;
    NSArray *_conentIcons;
    NSDictionary *_url_struct;
    NSDictionary *_title_url_struct;
    NSString *_addition_text;
    NSString *_addition_pic_url;
    NSString *_addition_cover_url;
    MMMessageFlowSharingLikeInfo *_likeInfo;
    MMMessageFlowSharingCommentInfo *_commentInfo;
    NSArray *_shields;
    NSArray *_tagArray;
    NSString *_follow_uid;
    NSString *_follow_cardid;
    WBCommonButtonModel *_buttonModel;
    MMNoticeVariableButtonModel *_variableButtonModel;
    NSArray *_pics;
    NSString *_morePicsScheme;
    MMNoticeStatusModel *_status;
    unsigned long long _contentType;
    unsigned long long _options;
    NSArray *_contents;
}

@property(nonatomic) _Bool newData; // @synthesize newData=_newData;
@property(copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) MMNoticeStatusModel *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *morePicsScheme; // @synthesize morePicsScheme=_morePicsScheme;
@property(copy, nonatomic) NSArray *pics; // @synthesize pics=_pics;
@property(retain, nonatomic) MMNoticeVariableButtonModel *variableButtonModel; // @synthesize variableButtonModel=_variableButtonModel;
@property(retain, nonatomic) WBCommonButtonModel *buttonModel; // @synthesize buttonModel=_buttonModel;
@property(copy, nonatomic) NSString *follow_cardid; // @synthesize follow_cardid=_follow_cardid;
@property(copy, nonatomic) NSString *follow_uid; // @synthesize follow_uid=_follow_uid;
@property(nonatomic) _Bool has_follow; // @synthesize has_follow=_has_follow;
@property(retain, nonatomic) NSArray *tagArray; // @synthesize tagArray=_tagArray;
@property(retain, nonatomic) NSArray *shields; // @synthesize shields=_shields;
@property(retain, nonatomic) MMMessageFlowSharingCommentInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) MMMessageFlowSharingLikeInfo *likeInfo; // @synthesize likeInfo=_likeInfo;
@property(retain, nonatomic) NSString *addition_cover_url; // @synthesize addition_cover_url=_addition_cover_url;
@property(retain, nonatomic) NSString *addition_pic_url; // @synthesize addition_pic_url=_addition_pic_url;
@property(retain, nonatomic) NSString *addition_text; // @synthesize addition_text=_addition_text;
@property(retain, nonatomic) NSDictionary *title_url_struct; // @synthesize title_url_struct=_title_url_struct;
@property(retain, nonatomic) NSDictionary *url_struct; // @synthesize url_struct=_url_struct;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSArray *conentIcons; // @synthesize conentIcons=_conentIcons;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *userlist; // @synthesize userlist=_userlist;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pre_title; // @synthesize pre_title=_pre_title;
@property(retain, nonatomic) WBUser *secondaryUser; // @synthesize secondaryUser=_secondaryUser;
@property(retain, nonatomic) MMMessageFlowMainPicInfo *mainPicInfo; // @synthesize mainPicInfo=_mainPicInfo;
@property(retain, nonatomic) WBUser *mainUser; // @synthesize mainUser=_mainUser;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *create_at_string; // @synthesize create_at_string=_create_at_string;
@property(retain, nonatomic) NSDate *create_at; // @synthesize create_at=_create_at;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

