//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMModel.h"

#import "MMCountdownModel-Protocol.h"

@class MMGroupBulletinUser, NSString;

@interface MMGroupBulletin : MMModel <MMCountdownModel>
{
    int _localId;
    unsigned int _readStatus;
    long long _bulletinId;
    long long _groupId;
    long long _keepTime;
    long long _time;
    long long _readStartTime;
    NSString *_scheme;
    NSString *_content;
    MMGroupBulletinUser *_sender;
}

+ (id)objectWithMAPIDictionary:(id)arg1;
@property(copy, nonatomic) MMGroupBulletinUser *sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) long long readStartTime; // @synthesize readStartTime=_readStartTime;
@property(nonatomic) unsigned int readStatus; // @synthesize readStatus=_readStatus;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long keepTime; // @synthesize keepTime=_keepTime;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long bulletinId; // @synthesize bulletinId=_bulletinId;
@property(nonatomic) int localId; // @synthesize localId=_localId;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isValidate;
- (_Bool)isExpired;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)fromResultSet:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithMAPIDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

