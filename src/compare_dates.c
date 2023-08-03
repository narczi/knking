#include <stdio.h>
int main(){
	int m_earliest, d_earliest, y_earliest;
	int m_new, d_new, y_new;

	printf("Enter date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &m_new, &d_new, &y_new);

	m_earliest = m_new;
	d_earliest = d_new;
	y_earliest = y_new;

	while(1){
		printf("Enter date (mm/dd/yy): ");
		scanf("%d/%d/%2d", &m_new, &d_new, &y_new);

		if(m_new == 0 && d_new == 0 && y_new == 0){
			break;
		}

		if(y_new < y_earliest){
			m_earliest = m_new;
			d_earliest = d_new;
			y_earliest = y_new;
		}else if(y_new == y_earliest){
			if(m_new < m_earliest){
				m_earliest = m_new;
				d_earliest = d_new;
				y_earliest = y_new;
			}else if(m_new == m_earliest){
				if(d_new < d_earliest){;
					m_earliest = m_new;
					d_earliest = d_new;
					y_earliest = y_new;
				}
			}
		}

	}

printf("%d/%d/%.2d is the earliest date\n", m_earliest, d_earliest, y_earliest);

	return 0;
}
