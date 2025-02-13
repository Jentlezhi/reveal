//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEventHandler.h"

@class MMRecallMessageInfo, NSMutableArray;

@interface MMMessageDeletedHandler : MMEventHandler
{
    _Bool _dataLegal;
    _Bool _isClearlMessageBoxAllSubChat;
    NSMutableArray *_messages;
    MMRecallMessageInfo *_recallInfo;
}

@property(nonatomic) _Bool isClearlMessageBoxAllSubChat; // @synthesize isClearlMessageBoxAllSubChat=_isClearlMessageBoxAllSubChat;
@property(retain, nonatomic) MMRecallMessageInfo *recallInfo; // @synthesize recallInfo=_recallInfo;
@property(nonatomic) _Bool dataLegal; // @synthesize dataLegal=_dataLegal;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)deleteSingleMessages:(id)arg1;
- (void)recallPostHandling:(id)arg1;
- (_Bool)recallDatabaseHandling:(id)arg1;
- (void)postHandling:(id)arg1;
- (_Bool)databaseHandling:(id)arg1;
- (_Bool)preHandling;
- (void)dealloc;

@end

