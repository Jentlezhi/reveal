//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMIMConnectConfigInfo : XMModel
{
    NSString *_appId;
    NSString *_userId;
    NSArray *_scInfoArray;
}

@property(retain, nonatomic) NSArray *scInfoArray; // @synthesize scInfoArray=_scInfoArray;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end

