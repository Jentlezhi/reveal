//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TBLivePresentQuestion : NSObject
{
    NSString *_comment;
    NSString *_userId;
    NSString *_userName;
    NSString *_userPic;
    NSDate *_createdTime;
    NSDate *_modifedTime;
}

+ (id)questionWithDict:(id)arg1;
@property(retain, nonatomic) NSDate *modifedTime; // @synthesize modifedTime=_modifedTime;
@property(retain, nonatomic) NSDate *createdTime; // @synthesize createdTime=_createdTime;
@property(copy, nonatomic) NSString *userPic; // @synthesize userPic=_userPic;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;

@end

