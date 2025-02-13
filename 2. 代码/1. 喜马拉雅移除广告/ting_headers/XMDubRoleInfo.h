//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString, NSURL, XMDubActorInfo;

@interface XMDubRoleInfo : XMModel
{
    _Bool _canDubbed;
    _Bool _isActor;
    long long _roleId;
    NSString *_name;
    long long _gender;
    NSURL *_excludeUrl;
    NSURL *_pureHumanUrl;
    NSString *_nickName;
    NSURL *_headPic;
    XMDubActorInfo *_actor;
    NSString *_subtitleRole;
}

@property(retain, nonatomic) NSString *subtitleRole; // @synthesize subtitleRole=_subtitleRole;
@property(nonatomic) _Bool isActor; // @synthesize isActor=_isActor;
@property(retain, nonatomic) XMDubActorInfo *actor; // @synthesize actor=_actor;
@property(retain, nonatomic) NSURL *headPic; // @synthesize headPic=_headPic;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSURL *pureHumanUrl; // @synthesize pureHumanUrl=_pureHumanUrl;
@property(nonatomic) _Bool canDubbed; // @synthesize canDubbed=_canDubbed;
@property(retain, nonatomic) NSURL *excludeUrl; // @synthesize excludeUrl=_excludeUrl;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long roleId; // @synthesize roleId=_roleId;
- (void).cxx_destruct;
- (id)init;

@end

