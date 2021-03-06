/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface CAReportingIOChannelSubscription : NSObject {
    CAReportingDriver * _driver;
    NSMutableDictionary * _subscribedChannels;
    struct __IOReportSubscriptionCF { } * _subscription;
}

@property (retain) CAReportingDriver *driver;
@property (retain) NSMutableDictionary *subscribedChannels;
@property struct __IOReportSubscriptionCF { }*subscription;

- (void).cxx_destruct;
- (id)driver;
- (id)initWithDriver:(id)arg1;
- (void)setDriver:(id)arg1;
- (void)setSubscribedChannels:(id)arg1;
- (void)setSubscription:(struct __IOReportSubscriptionCF { }*)arg1;
- (id)subscribedChannels;
- (struct __IOReportSubscriptionCF { }*)subscription;

@end
