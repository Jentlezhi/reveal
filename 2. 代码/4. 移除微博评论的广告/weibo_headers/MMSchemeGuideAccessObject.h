//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMGeneralMessageAccessObject.h"

@interface MMSchemeGuideAccessObject : MMGeneralMessageAccessObject
{
}

- (id)latestSchemeGuideMessageInfoByChatId:(long long)arg1;
- (_Bool)updateChatLatestMessageId:(long long)arg1;
- (_Bool)deleteSchemeGuideOverMessageId:(long long)arg1 inChat:(long long)arg2;
- (_Bool)deleteAllSchemeGuideWithChatId:(long long)arg1;
- (_Bool)deleteMessages:(long long)arg1 keepEntrance:(_Bool)arg2;
- (_Bool)saveSchemeGuide:(id)arg1 isApi:(_Bool)arg2;
- (_Bool)saveOrUpdateChat:(id)arg1 isApi:(_Bool)arg2 needCorrection:(_Bool)arg3 mySelf:(id)arg4;
- (long long)latestMessageIdForConversation:(id)arg1;
- (long long)timeForConversation:(id)arg1;
- (int)chatType;

@end

