#include<stdio.h>
#include<string.h>

const char *word[55]={"just","see","him","your","come","could","now","than","like","other","how","then","its","our","two","more","these","want","way","look","first","also","new","because","day","use","no","man","find","here","thing","give","many","well","only","those","tell","very","even","back","any","good","woman","through","us","life","child","work","down","may"};
const char *part[55]={"adj,adv","v","pron","pron","v","aux","n,adj","conj,prep","adj,v","adj","adv","adv","pron","pron","num","adv","adj,pron","n","n","n","adv,n","adv","adj,adv","conj","n","n,v","n,adj,adv","n,v","v,n","adv,n,int","n","v,n","n,adj,pron","n,adj,adv,v","adj,adv,conj","pron,adj","v","adj,adv","adj,adv,v","adj,adv,n,v","adj,adv,prep","n,adj","n","adj,adv,prep","pron","n,adj","n","n,adj,v","adj,adv,n,prep","n,v"};
const char *tra[55]={"adj. 公正的,公平的,恰当的 adv. 正好,恰好","vt. 看见,经历,明白,确保,视为,拜访,陪同 vi. 注意,想象,了解,调查 n. 主教教区,主角权限","pron. 他(宾格)","pron. 你的, 你们的","vt. 接近，扮演 vi. 来，发生，达到，进入","aux.“can”的过去式； 能够，打算； 用于假设语气的条件句； 用于虚拟语气的结论句","n. 现在,此刻 adj. 现存的, 目前的 adv. 现在,立刻 conj. 既然 abbr. =National Organization of Women 全国妇女组织","conj.比（用于比较级）； 宁愿…而不愿； 除…以外； 一…就 prep.超过； 比","adj. 相似的,同样的 vt. &vi. 喜欢,愿意,想 prep. 像,如同 n. 爱好,类似的人（或物） adv. 大概,和…一样 conj. 如同","adj. 别的,其他的 pron. 另一个人(或事) n. 其他人(或事)"," adv. 如何,怎样,多么,多少 conj. 如何,怎样,以...方式 n. 方式","adv. 那么, 当时，然后，于是 adj. 当时的","pron.（it的所有格)它的","pron. 我们的","num. 二，两个","adv.更，更多； 达到或处于更大的范围或程度； 此外，更加 adj.更多的； (many)的比较级； 附加的，额外的 pron.更多的或附加的人或事物 n.更多； 附加，添加","adj.&pron. 这些","n. 缺乏, 贫困, 欲望, 需要, 不足 vi. 要, 希望, 必须 vt. 缺少, 渴望, 喜欢, 应该"," n. 方法,道路,方向,作风,(某)方面,程度,状态 adv. 非常,很多,很远 adj. 与路线的中间点相关的,路线的中间点","n. 看, 神色, 样子, 脸色 vi. 看, 注意, 朝着, 好象, 显得 vt. 打量, 注视, 用眼神或脸色表示, 期待","adv. 首先,第一,优先 adj. 第一的, 最早的, 一流的 n. (序数词)第一, 第一个人或事物, (大学学位的)最优等, (汽车, 自行车等的)最低挡","adv. 也, 同样地, 而且","adj. 新的,附加的 adv. 新的","conj. 因为"," n. 白天,一天","n. 运用,用法,使用权,适用 vt. 使用,利用,对待 vi. 吸毒","n. 不, 拒绝, 否决票 adj. 没有, 不是, 绝adv. 不","n. 男人,人类,人 vt. 为...配备人手,使...振奋","vt. &vi. 发现,感觉到,认为 n. 发现物","adv.在这里； 这时； 在这一点上； （给某人东西或指出某物时说） n.这里 int.喂； 嗨","n. 东西, 事情","vt.& vi.给予； 赠送； 作出 vt.供给； 产生； 举办； （为购买某物或做某事而）支付 vi.（物体）塌下； 让步 n.伸展性，弹性","n. 许多人,许多 adj. 许多的 pron. 许多人或物","n. 井,源泉,楼梯井 adj. 健康的,良好的,适宜的 adv. 很好地,适当地 vi. 涌出 interj. 好吧,啊","adj. 最好的,唯一的,出众的 adv. 仅仅,只有,专门地,唯一地,刚才 conj. 除非, 但是, 然而, 毕竟","pron.&adj. 那些","vt. 告诉,说,知道,认出,计数 vi. 讲述,告发,作证,产生效果","adj. 真正的,完全的,自己的,仅仅的,同一个,特别的 adv. 真的,非常"," adj. 平坦的, 偶数的, 相等的 adv. 甚至, 恰好, 正当 v. 使平坦, 相等","adj. 后面的，偏远的, 过时的, 积欠的, 向后的 adv. 向后地 n. 后背, 背脊，后面, 靠背 vt. 后退，支持 vi. 后退","adj. 任何的 adv. 稍 det. 一些 prep. 无论哪个 pron. 任何","n. 善行,好处 adj. 好的,优良的,上等的 [pl.]商品","n. 妇女, 女人","adv. 穿越, 完全 prep. 经过, 穿过, 凭借 adj. 完成的, 完结的; 贯穿的, 直通的","pron. 我们(we的宾格)"," n. 生活, 生命, 人生, 生物, 寿命,灵魂, 无期(徒刑) adj. 活的,终身的,生动的","n.小孩，孩子； 幼稚的人； 产物； 弟子","n. 工作,作用,成果,作品,善行,工艺,奏效,建筑工程,工厂,(机械)活动部件 adj. 工作的 vi. 创造, 实现, 有工作, 起作用, 操作, 正常运转, 成功, 产生影响, 逐渐进行, 处理 vt. 造成, 产生, 使运转, 锻造, 奋力达到, 利用","adj. 向下的,降低的,情绪低落,停止运行 adv. 向下的,下跌,在南方 n. 绒毛,汗毛,轻视 prep. 沿着...而下","n. 五月, 青春 v. aux.可能,可以,祝愿"};
int main(){
	char str[100];
    if(fgets(str,sizeof(str),stdin)!=NULL){
        str[strlen(str)-1]='\0';
    }
    int found=0;
    for(int i=0;i<50;i++){
    	if(strcmp(word[i],str)==0){
    		printf("词性：%s\n",part[i]);
			printf("汉意：%s",tra[i]);
			found=1;
			break;
		}
	}
	if (!found) {
        printf("未找到该单词。\n");
    }	
	return 0;
}
