//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol YXAudienceTableDataSourceManagerDelegate <NSObject>

@optional
- (void)dataSourceManagerShouldUpdate;
- (void)showAudienceListFirstDefault;
- (void)deleteAudienceListFirstMember:(NSString *)arg1;
- (void)updateAudienceListFirstInfo:(NSDictionary *)arg1;
- (void)audienceTableDataSourceManagerDidReload;
@end

